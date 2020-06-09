#ifndef _SAM_H
#define _SAM_H
#define part_is_defined(part) (defined(__ ## part ## __))

/*
 * ----------------------------------------------------------------------------
 * SAMR family
 * ----------------------------------------------------------------------------
 */

/* SAMR34 series */
#define SAMR34E15 ( \
    part_is_defined( SAMR34E15B ) )

#define SAMR34E16 ( \
    part_is_defined( SAMR34E16B ) )

#define SAMR34E17 ( \
    part_is_defined( SAMR34E17B ) )

#define SAMR34E18 ( \
    part_is_defined( SAMR34E18B ) )

#define SAMR34G16 ( \
    part_is_defined( SAMR34G16B ) )

#define SAMR34G17 ( \
    part_is_defined( SAMR34G17B ) )

#define SAMR34G18 ( \
    part_is_defined( SAMR34G18B ) )

#define SAMR34J16 ( \
    part_is_defined( SAMR34J16B ) )

#define SAMR34J17 ( \
    part_is_defined( SAMR34J17B ) )

#define SAMR34J18 ( \
    part_is_defined( SAMR34J18B ) )

/* Entire SAMR34E series */
#define SAMR34E_SERIES (SAMR34E15 || SAMR34E16 || SAMR34E17 || SAMR34E18)
#define SAMR34E SAMR34E_SERIES

/* Entire SAMR34G series */
#define SAMR34G_SERIES (SAMR34G16 || SAMR34G17 || SAMR34G18)
#define SAMR34G SAMR34G_SERIES

/* Entire SAMR34J series */
#define SAMR34J_SERIES (SAMR34J16 || SAMR34J17 || SAMR34J18)
#define SAMR34J SAMR34J_SERIES

/* Entire SAMR34 series */
#define SAMR34_SERIES (SAMR34E15 || SAMR34E16 || SAMR34E17 || SAMR34E18 || SAMR34G16 || SAMR34G17 || SAMR34G18 || SAMR34J16 || SAMR34J17 || SAMR34J18)
#define SAMR34  SAMR34_SERIES

/* Entire SAMR family */
#define SAMR_SERIES (SAMR34_SERIES)
#define SAMR  SAMR_SERIES

#include "samr34.h"
#endif