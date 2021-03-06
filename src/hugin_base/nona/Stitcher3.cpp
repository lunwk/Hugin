// -*- c-basic-offset: 4 -*-
/** @file Stitcher.cpp
 *
 *  Contains various routines used for stitching panoramas.
 *
 *  @author Pablo d'Angelo <pablo.dangelo@web.de>
 *
 *  $Id$
 *
 *  This is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This software is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public
 *  License along with this software. If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "Stitcher.h"

void HuginBase::Nona::stitchPanoRGB_8_16(const PanoramaData & pano,
                            const PanoramaOptions & opts,
                            AppBase::ProgressDisplay* progress,
                            const std::string & basename,
                            const UIntSet & usedImgs,
                            const char * pixelType,
                            const AdvancedOptions& advOptions)
{
    if (strcmp(pixelType, "UINT8") == 0 ) {
        stitchPanoIntern<vigra::BRGBImage, vigra::BImage>(pano, opts, progress, basename, usedImgs, advOptions);
    } else if (strcmp(pixelType, "INT16") == 0 ) {
        stitchPanoIntern<vigra::SRGBImage, vigra::BImage>(pano, opts, progress, basename, usedImgs, advOptions);
    } else if (strcmp(pixelType, "UINT16") == 0 ) {
        stitchPanoIntern<vigra::UInt16RGBImage, vigra::BImage>(pano, opts, progress, basename, usedImgs, advOptions);
    } else {
        UTILS_THROW(std::runtime_error, "Unsupported pixel type: " << pixelType );
        return;
    }
}


