/*
 * Copyright (C) 2018 Red Hat, Inc. All rights reserved.
 *
 * This file is part of LVM2.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef TEST_UNIT_UNITS_H
#define TEST_UNIT_UNITS_H

#include "framework.h"

//-----------------------------------------------------------------

// Declare the function that adds tests suites here ...
void btree_tests(struct list_head *suites);

// ... and call it in here.
static inline void register_all_tests(struct list_head *suites)
{
        btree_tests(suites);
}

//-----------------------------------------------------------------

#endif
