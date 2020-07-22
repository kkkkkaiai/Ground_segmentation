//
// Created by adam on 18-9-21.
//

#include "ground_seg.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "ground_seg");

    ros::NodeHandle nh;

    PclTestCore core(nh);
    // core.Spin();
    return 0;
}
