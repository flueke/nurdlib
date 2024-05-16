/*
 * nurdlib, NUstar ReaDout LIBrary
 *
 * Copyright (C) 2016-2020, 2023-2024
 * Stephane Pietri
 * Hans Toshihide Törnqvist
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA
 */

#ifndef MODULE_CAEN_V8N0_INTERNAL_H
#define MODULE_CAEN_V8N0_INTERNAL_H

#include <module/module.h>

struct CaenV8n0Module {
	struct	Module module;
	uint32_t	address;
	enum Keyword	blt_mode;
	struct	Map *sicy_map;
	struct	Map *dma_map;
	enum	Keyword child_type;
	int	paux;
	int	geo;
};

void		caen_v8n0_create(struct Crate *, struct ConfigBlock *, struct
    CaenV8n0Module *, enum Keyword);
void		caen_v8n0_deinit(struct CaenV8n0Module *);
struct Map	*caen_v8n0_get_map(struct CaenV8n0Module *) FUNC_RETURNS;
void		caen_v8n0_init_slow(struct CaenV8n0Module *);

#endif
