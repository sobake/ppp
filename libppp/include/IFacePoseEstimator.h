#pragma once
#include <opencv2/core/types.hpp>

struct LandMarks;

class IFacePoseEstimator
{
public:
    virtual ~IFacePoseEstimator() = default;

    virtual void estimatePose(const LandMarks & landMarks, double focalLength, cv::Point2d focalCenter) const = 0;
};
