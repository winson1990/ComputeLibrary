/*
 * Copyright (c) 2016, 2017 ARM Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __ARM_COMPUTE_CLFUNCTIONS_H__
#define __ARM_COMPUTE_CLFUNCTIONS_H__

/* Header regrouping all the CL functions */
#include "arm_compute/runtime/CL/functions/CLAbsoluteDifference.h"
#include "arm_compute/runtime/CL/functions/CLAccumulate.h"
#include "arm_compute/runtime/CL/functions/CLActivationLayer.h"
#include "arm_compute/runtime/CL/functions/CLArithmeticAddition.h"
#include "arm_compute/runtime/CL/functions/CLArithmeticSubtraction.h"
#include "arm_compute/runtime/CL/functions/CLBitwiseAnd.h"
#include "arm_compute/runtime/CL/functions/CLBitwiseNot.h"
#include "arm_compute/runtime/CL/functions/CLBitwiseOr.h"
#include "arm_compute/runtime/CL/functions/CLBitwiseXor.h"
#include "arm_compute/runtime/CL/functions/CLBox3x3.h"
#include "arm_compute/runtime/CL/functions/CLCannyEdge.h"
#include "arm_compute/runtime/CL/functions/CLChannelCombine.h"
#include "arm_compute/runtime/CL/functions/CLChannelExtract.h"
#include "arm_compute/runtime/CL/functions/CLColorConvert.h"
#include "arm_compute/runtime/CL/functions/CLConvolution.h"
#include "arm_compute/runtime/CL/functions/CLConvolutionLayer.h"
#include "arm_compute/runtime/CL/functions/CLDepthConvert.h"
#include "arm_compute/runtime/CL/functions/CLDerivative.h"
#include "arm_compute/runtime/CL/functions/CLDilate.h"
#include "arm_compute/runtime/CL/functions/CLEqualizeHistogram.h"
#include "arm_compute/runtime/CL/functions/CLErode.h"
#include "arm_compute/runtime/CL/functions/CLFastCorners.h"
#include "arm_compute/runtime/CL/functions/CLFillBorder.h"
#include "arm_compute/runtime/CL/functions/CLFullyConnectedLayer.h"
#include "arm_compute/runtime/CL/functions/CLGEMM.h"
#include "arm_compute/runtime/CL/functions/CLGEMMInterleave4x4.h"
#include "arm_compute/runtime/CL/functions/CLGEMMLowp.h"
#include "arm_compute/runtime/CL/functions/CLGaussian3x3.h"
#include "arm_compute/runtime/CL/functions/CLGaussian5x5.h"
#include "arm_compute/runtime/CL/functions/CLGaussianPyramid.h"
#include "arm_compute/runtime/CL/functions/CLHarrisCorners.h"
#include "arm_compute/runtime/CL/functions/CLHistogram.h"
#include "arm_compute/runtime/CL/functions/CLIntegralImage.h"
#include "arm_compute/runtime/CL/functions/CLLaplacianPyramid.h"
#include "arm_compute/runtime/CL/functions/CLLaplacianReconstruct.h"
#include "arm_compute/runtime/CL/functions/CLMagnitude.h"
#include "arm_compute/runtime/CL/functions/CLMeanStdDev.h"
#include "arm_compute/runtime/CL/functions/CLMedian3x3.h"
#include "arm_compute/runtime/CL/functions/CLMinMaxLocation.h"
#include "arm_compute/runtime/CL/functions/CLNonLinearFilter.h"
#include "arm_compute/runtime/CL/functions/CLNonMaximaSuppression3x3.h"
#include "arm_compute/runtime/CL/functions/CLNormalizationLayer.h"
#include "arm_compute/runtime/CL/functions/CLOpticalFlow.h"
#include "arm_compute/runtime/CL/functions/CLPhase.h"
#include "arm_compute/runtime/CL/functions/CLPixelWiseMultiplication.h"
#include "arm_compute/runtime/CL/functions/CLPoolingLayer.h"
#include "arm_compute/runtime/CL/functions/CLRemap.h"
#include "arm_compute/runtime/CL/functions/CLScale.h"
#include "arm_compute/runtime/CL/functions/CLScharr3x3.h"
#include "arm_compute/runtime/CL/functions/CLSobel3x3.h"
#include "arm_compute/runtime/CL/functions/CLSobel5x5.h"
#include "arm_compute/runtime/CL/functions/CLSobel7x7.h"
#include "arm_compute/runtime/CL/functions/CLSoftmaxLayer.h"
#include "arm_compute/runtime/CL/functions/CLTableLookup.h"
#include "arm_compute/runtime/CL/functions/CLThreshold.h"
#include "arm_compute/runtime/CL/functions/CLTranspose.h"
#include "arm_compute/runtime/CL/functions/CLWarpAffine.h"
#include "arm_compute/runtime/CL/functions/CLWarpPerspective.h"

#endif /* __ARM_COMPUTE_CLFUNCTIONS_H__ */
