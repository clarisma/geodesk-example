#include <geodesk/geodesk.h>

using namespace geodesk;

int main(int argc, char* argv[])
{
    if(argc < 2) return 0;
    Features world(argv[1]);
    for(auto f : world("na[amenity=restaurant]"))
    {
        std::cout << f["name"] << std::endl;
    }
    return 0;
}