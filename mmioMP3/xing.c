/*
 * madplay - MPEG audio decoder and player
 * Copyright (C) 2000-2003 Robert Leslie
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * $Id: xing.c,v 1.6 2003/05/30 06:26:18 rob Exp $
 */

# ifdef HAVE_CONFIG_H
#  include "config.h"
# endif

# include "global.h"
# include <string.h>
# include <mad.h>

# include "xing.h"

# define XING_MAGIC	(('X' << 24) | ('i' << 16) | ('n' << 8) | 'g')

/*
 * NAME:	xing->init()
 * DESCRIPTION:	initialize Xing structure
 */
void xing_init(struct xing *xing)
{
  memset(xing,'0',sizeof(struct xing));
}

/*
 * NAME:	xing->parse()
 * DESCRIPTION:	parse a Xing VBR header
 */
int xing_parse(struct xing *xing, struct mad_bitptr ptr, unsigned int bitlen)
{
  if (bitlen < 64 || mad_bit_read(&ptr, 32) != XING_MAGIC)
    goto fail;

  xing->flags = mad_bit_read(&ptr, 32);
  bitlen -= 64;

  if (xing->flags & XING_FRAMES) {
    if (bitlen < 32)
      goto fail;

    xing->frames = mad_bit_read(&ptr, 32);
    bitlen -= 32;
  }

  if (xing->flags & XING_BYTES) {
    if (bitlen < 32)
      goto fail;

    xing->bytes = mad_bit_read(&ptr, 32);
    bitlen -= 32;
  }

  if (xing->flags & XING_TOC) {
    int i;

    if (bitlen < 800)
      goto fail;

    for (i = 0; i < 100; ++i)
      xing->toc[i] = mad_bit_read(&ptr, 8);

    bitlen -= 800;
  }

  if (xing->flags & XING_SCALE) {
    if (bitlen < 32)
      goto fail;

    xing->scale = mad_bit_read(&ptr, 32);
    bitlen -= 32;
  }

  return 0;

 fail:
  xing->flags = 0;
  return -1;
}
