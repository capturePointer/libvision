#ifndef VL_SHITOMASI_H
#define VL_SHITOMASI_H

#include <vision/image/image.h>

namespace vision  {
// Honteusement repompé de ptam

double ShiTomasi_score ( Image<unsigned char, MONO> & image, int nHalfBoxSize, ImageRef irCenter) ;

}

#endif

