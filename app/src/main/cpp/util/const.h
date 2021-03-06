/**
 * Created by lvHiei on 17-4-1.
 * This is a project of GPUImage implemented with c++, you can
 * use it free. if you find some bug please send me a email.
 * My Email is majun_1523@163.com.
 */

#ifndef CGPUIMAGE_ANDROID_CONST_H
#define CGPUIMAGE_ANDROID_CONST_H

#define __GLSL_SUPPORT_HIGHP__      1

const int ABS_FLIE_LEN_MAX = 1024;

const int VERTEX_COORDINATE_SIZE = 8;
const int TEXTURE_COORDINATE_SIZE = 8;


enum Rotation{
    ROTATION_NORMAL = 0,
    ROTATION_90 = 90,
    ROTATION_180 = 180,
    ROTATION_270 = 270,
};

enum FILTER_TYPE{
    FILTER_3X3_CONVOLUTION,

    FILTER_ADAPTIVE_THRESHOLD,
    FILTER_ADD_BLEND,
    FILTER_ALPHA_BLEND,
    FILTER_AMATORKA,

    FILTER_BILATERAL,
    FILTER_BOXBLUR,
    FILTER_BRIGHTNESS,
    FILTER_BULGE_DISTORTION,

    FILTER_CANNY_EDGE_DETECTION,
    FILTER_CGA_COLORSPACE,
    FILTER_CHROMAKEY_BLEND,
    FILTER_CHROMAKEY,
    FILTER_CLOSING,
    FILTER_COLOR_BLEND,
    FILTER_COLOR_BURN_BLEND,
    FILTER_COLOR_DODGE_BLEND,
    FILTER_COLOR_INVERT,
    FILTER_COLOR_LOCAL_BINARY_PATTERN,
    FILTER_COLOR_MATRIX,
    FILTER_COLOR_PACKING,
    FILTER_COLOUR_FAST_FEATURE_DETECTOR,
    FILTER_COLOUR_FAST_SAMPLING_OPERATION,
    FILTER_CONTRAST,
    FILTER_CROP,
    FILTER_CROSSHATCH,

    FILTER_DARKEN_BLEND,
    FILTER_DIFFERENCE_BLEND,
    FILTER_DILATION,
    FILTER_DIRECTIONAL_NON_MAXIMUM_SUPPRESSION,
    FILTER_DIRECTIONAL_SOBEL_EDGE_DETECTION,
    FILTER_DISSOLVE_BLEND,
    FILTER_DIVIDE_BLEND,

    FILTER_EMBOSS,
    FILTER_EROSION,
    FILTER_EXCLUSION_BLEND,
    FILTER_EXPOSURE,

    FILTER_FALSE_COLOR,

    FILTER_GAMMA,
    FILTER_GAUSSIAN_BLUR,
    FILTER_GAUSSIAN_BLUR_POSITION,
    FILTER_GAUSSIAN_SELECTIVE_BLUR,
    FILTER_GLASS_SPHERE,
    FILTER_GREYSCALE,

    FILTER_HALFTONE,
    FILTER_HARD_LIGHT_BLEND,
    FILTER_HAZE,
    FILTER_HIGHLIGHT_SHADOW,
    FILTER_HIGHLIGHT_SHADOW_TINT,
    FILTER_HSB,
    FILTER_HUE_BLEND,
    FILTER_HUE,

    FILTER_IOS_BLURE,

    FILTER_JFA_VORONOI,

    FILTER_KUWAHARA,
    FILTER_KUWAHARA_RADIUS3,

    FILTER_LANCZOS_RESAMPLING,
    FILTER_LAPLACIAN,
    FILTER_LEVELS,
    FILTER_LIGHTEN_BLEND,
    FILTER_LINEAR_BURN_BLEND,
    FILTER_LOCAL_BINARY_PATTERN,
    FILTER_LUMINANCE_RANGE,
    FILTER_LUMINANCE_THRESHOLD,
    FILTER_LUMINOSITY_BLEND,

    FILTER_MASK,
    FILTER_MEDIAN,
    FILTER_MISS_ETIKATE,
    FILTER_MONOCHROME,
    FILTER_MOSAIC,
    FILTER_MOTION_BLUR,
    FILTER_MULTIPLY_BLEND,

    FILTER_NON_MAXIMUM_SUPPRESSION,
    FILTER_NORMAL_BLEND,

    FILTER_OPACITY,
    FILTER_OPENING,
    FILTER_OVERLAY_BLEND,

    FILTER_PERLIN_NOISE,
    FILTER_PINCH_DISTORTION,
    FILTER_PIXELLATE,
    FILTER_PIXELLATE_POSITION,
    FILTER_POISSON_BLEND,
    FILTER_POLAR_PIXELLATE,
    FILTER_POLKA_DOT,
    FILTER_POSTERIZE,
    FILTER_PREWITT_EDGE_DETECTION,

    FILTER_RGB_CLOSING,
    FILTER_RGB_DILATION,
    FILTER_RGB_EROSION,
    FILTER_RGB,
    FILTER_RGB_OPENING,

    FILTER_SATURATION_BLEND,
    FILTER_SATURATION,
    FILTER_SCREEN_BLEND,
    FILTER_SEPIA,
    FILTER_SHARPEN,
    FILTER_SINGLE_COMPONENT_GAUSSIAN_BLUR,
    FILTER_SKETCH,
    FILTER_SKIN_TONE,
    FILTER_SMOOTH_TOON,
    FILTER_SOBEL_EDGE_DETECTION,
    FILTER_SOFT_ELEGANCE,
    FILTER_SOFT_LIGHT_BLEND,
    FILTER_SOURCE_OVER_BLEND,
    FILTER_SPHERE_REFRACTION,
    FILTER_STRETCH_DISTORTION,
    FILTER_SUBTRACT_BLEND,
    FILTER_SWIRL,

    FILTER_THRESHOLD_EDGE_DETECTION,
    FILTER_THRESHOLDED_NON_MAXIMUM_SUPPRESSION,
    FILTER_THRESHOLD_SKETCH,
    FILTER_TILT_SHIFT,
    FILTER_TONE_CURVE,
    FILTER_TOON,
    FILTER_TRANSFORM,

    FILTER_UNSHARP_MASK,

    FILTER_VIBRANCE,
    FILTER_VIGNETTE,
    FILTER_VORONOI_CONSUMER,

    FILTER_WEAK_PIXEL_INCLUSION,
    FILTER_WHITE_BALANCE,

    FILTER_XY_DERIVATIVE,
    FILTER_ZOOM,
};


#endif //CGPUIMAGE_ANDROID_CONST_H
