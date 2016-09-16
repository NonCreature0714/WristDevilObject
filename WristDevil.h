//
// Created by William Brubaker on 9/16/16.
//

#ifndef WRISTDEVIL_WRISTDEVIL_H
#define WRISTDEVIL_WRISTDEVIL_H

/*
 *
 * Designed to work with the NewPing.h library.
 *
 */
class WristDevil {
private:
    unsigned long distance;
    unsigned long feedbackLevel;
    unsigned long sample;
    /*
     * CalculateRollingAverage()
     *  A function which determines a
     *  rolling average without storing
     *  data over a preset range.
     */
    const unsigned long& calculateRollingAverage(unsigned long, const unsigned long &);
public:
    /*
     * Default constructor,
     * initializes distance, feedback, and sample size
     * to zero, requires the sample size be set later.
     */
    WristDevil();

    /*
     * Constructor which is created with a sample size.
     * Requires distance and feedback be set later.
     */
    WristDevil(const unsigned long& sampleSize);

    /*
     *
     */
    void setDistance(const unsigned long &);

    /*
     *
     */
    const unsigned long& getDistance();

    /*
     *
     */
    void setFeedbackLevel(const unsigned long &);

    /*
     *
     */
    const unsigned long & getFeedbackLevel();

    /*
     *
     */
    void setSampleSize(const unsigned long&);

    /*
     *
     */
    const unsigned long& getSampleSize();
};


#endif //WRISTDEVIL_WRISTDEVIL_H
