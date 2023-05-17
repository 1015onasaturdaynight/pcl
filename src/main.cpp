#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    pcl::PointCloud<pcl::PointXYZ> cloud;

    cloud.width = 50;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.points.resize (cloud.width * cloud.height);

    for (auto & point : cloud.points)
    {
        point.x = 1024 * rand() / (RAND_MAX + 1.0f);
        point.y = 1024 * rand() / (RAND_MAX + 1.0f);
        point.z = 1024 * rand() / (RAND_MAX + 1.0f);
    }

    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);

    return 0;
}
