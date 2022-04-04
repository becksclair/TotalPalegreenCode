#include "problem2.h"
#include <iostream>

// Implement a LRU Cache of bitmaps, that when stored
// in allocated would fire of a worker thread to generate
// a thumbnail.
//
// The thumbnail generation should be an empty placeholder
// for the purpose of this example, but you should pay
// attention to the performance implications.

struct Images{};

const uint8 maxSize = 10;

class Cache {

  private:
    std::list<Images> mImages;
    uint8 size =0;
  public:
    Cache()
    {
    }

    void AddElement(const Images& image)
    {
      if(size == maxSize)
      {
        mImages.pop_front();
        size--;
      }
      mImages.push_back(image);
      size++;
    }
}

void RunProblem2() {
    std::cout << "Problem 2 😳\n\n";
  
}
