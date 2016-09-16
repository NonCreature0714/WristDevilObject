//
// Created by William Brubaker on 9/16/16.
//

#include <iostream>
#include "WristDevil.h"

WristDevil::WristDevil(): distance(0), feedbackLevel(0), sample(0) {}
WristDevil::WristDevil(const unsigned long &sampleSize): distance(0), feedbackLevel(0), sample(sampleSize) {}

const unsigned long &WristDevil::calculateRollingAverage(unsigned long average, const unsigned long & newSample) {
    average -= average/getSampleSize();
    average += newSample/getSampleSize();
    return average;
}

void WristDevil::setDistance(const unsigned long &d) {
    distance = d;
}

const unsigned long &WristDevil::getDistance() {
    return distance;
}

void WristDevil::setFeedbackLevel(const unsigned long & f) {
    feedbackLevel = f;
}
/
const unsigned long &WristDevil::getFeedbackLevel() {
    return feedbackLevel;
}

void WristDevil::setSampleSize(const unsigned long &s) {
    if(s == 0) {
        std::cout << "Sample set cannot be equal to zero." << std::endl;
        std::cout << "Setting sample to 1." << std::endl;
        sample = 1;
        return;
    }
    sample = s;
}

const unsigned long &WristDevil::getSampleSize() {
    return sample;
}


