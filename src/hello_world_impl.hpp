#pragma once

#include "praha_zije_hudbou.hpp"

namespace prahazijehudbou {

    class HelloWorldImpl : public prahazijehudbou::PrahaZijeHudbou {

    public:

        // Constructor
        HelloWorldImpl();

        // Our method that returns a string
        std::string get_hello_world();

    };

}
