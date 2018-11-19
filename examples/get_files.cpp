// Clip Library
// Copyright (c) 2015 David Capello

#include "clip.h"
#include <iostream>
#include <vector>

int main() {
  if (clip::has(clip::file_format())) {
    std::vector<std::string> files;
    clip::get_files(files);
	
    std::cout << "Clipboard files count: " << files.size() << "\n";
    for (size_t i = 0; i < files.size(); i++) {
      std::cout << "Clipboard file #" << i+1 << " '" << files[i] << "'\n";
    }
  }
  else {
    std::cout << "Clipboard doesn't contain file\n";
  }
}
