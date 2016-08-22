#pragma once

#include <opencv2/core/core.hpp>
class CanvasDefinition;
class PhotoStandard;

class IPhotoPrintMaker
{
public:
    virtual ~IPhotoPrintMaker()
    {
    }

    virtual cv::Mat cropPicture(const cv::Mat& originalImage,
                                const cv::Point& crownPoint,
                                const cv::Point& chinPoint,
                                const PhotoStandard& ps) = 0;

    virtual cv::Mat tileCroppedPhoto(const CanvasDefinition& canvas,
        const PhotoStandard& ps,
        const cv::Mat& croppedImage) = 0;
};