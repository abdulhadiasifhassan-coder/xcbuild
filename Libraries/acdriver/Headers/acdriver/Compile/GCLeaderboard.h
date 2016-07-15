/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef __acdriver_Compile_GCLeaderboard_h
#define __acdriver_Compile_GCLeaderboard_h

#include <xcassets/Asset/Asset.h>
#include <xcassets/Asset/GCLeaderboard.h>

#include <memory>

namespace libutil { class Filesystem; }

namespace acdriver {

class CompileOutput;
class Result;

namespace Compile {

class GCLeaderboard {
private:
    GCLeaderboard();
    ~GCLeaderboard();

public:
    static bool Compile(
        std::shared_ptr<xcassets::Asset::GCLeaderboard> const &gcLeaderboard,
        libutil::Filesystem *filesystem,
        CompileOutput *compileOutput,
        Result *result);
};

}
}

#endif // !__acdriver_Compile_GCLeaderboard_h
