#pragma once

#include "ofMain.h"

#include <random>

constexpr int print_size{50};

class ofApp : public ofBaseApp
{

public:
  void setup() override;
  void update() override;
  void draw() override;

  std::random_device rd{};
  std::mt19937 generator{rd()};

};
