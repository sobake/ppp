#pragma once
#include <IPhotoPrintMaker.h>

#include <gmock/gmock.h>

namespace ppp
{
class MockPhotoPrintMaker : public IPhotoPrintMaker
{
public:
    MOCK_METHOD4(cropPicture, cv::Mat(const cv::Mat &, const cv::Point &, const cv::Point &, const PhotoStandard &));
    MOCK_METHOD3(tileCroppedPhoto, cv::Mat(const PrintDefinition &, const PhotoStandard &, const cv::Mat &));
    MOCK_METHOD1(configure, void(rapidjson::Value &));
};
} // namespace ppp
