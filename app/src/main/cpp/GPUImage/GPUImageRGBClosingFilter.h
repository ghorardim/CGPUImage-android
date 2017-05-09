/**
 * Created by mj on 17-5-9.
 */

#ifndef CGPUIMAGE_ANDROID_GPUIMAGERGBCLOSINGFILTER_H
#define CGPUIMAGE_ANDROID_GPUIMAGERGBCLOSINGFILTER_H

#include "GPUImageFilterGroup.h"
#include "GPUImageRGBErosionFilter.h"
#include "GPUImageRGBDilationFilter.h"

// A filter that first performs a dilation on each color channel of an image, followed by an erosion of the same radius.
// This helps to filter out smaller dark elements.

class GPUImageRGBClosingFilter : public GPUImageFilterGroup{
public:
    GPUImageRGBClosingFilter();
    GPUImageRGBClosingFilter(int radius);
    virtual ~GPUImageRGBClosingFilter();


    virtual bool release();

protected:
    void initWithRadius(int radius);

protected:
    GPUImageRGBErosionFilter* m_pErosionFilter;
    GPUImageRGBDilationFilter* m_pDilationFilter;
};


#endif //CGPUIMAGE_ANDROID_GPUIMAGERGBCLOSINGFILTER_H
