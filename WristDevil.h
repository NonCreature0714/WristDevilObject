//
// Created by William Brubaker on 9/16/16.
// Site: www.intelbeast.com
// Twitter: @InteligentBeast
//

#ifndef WRISTDEVIL_WRISTDEVIL_H
#define WRISTDEVIL_WRISTDEVIL_H

/*
 *
 * Designed to work with the NewPing.h library.
 *
 * Credit to Muis on StackOverFlow for good solution
 * to rolling average problem. Website:
 * http://stackoverflow.com/questions/12636613/how-to-calculate-moving-average-without-keeping-the-count-and-data-total
 * Muis' profile:
 * http://stackoverflow.com/users/435733/muis
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

    void setDistance(const unsigned long &);
    const unsigned long& getDistance();

    void setFeedbackLevel(const unsigned long &);
    const unsigned long & getFeedbackLevel();

    void setSampleSize(const unsigned long&);
    const unsigned long& getSampleSize();
};


#endif //WRISTDEVIL_WRISTDEVIL_H
