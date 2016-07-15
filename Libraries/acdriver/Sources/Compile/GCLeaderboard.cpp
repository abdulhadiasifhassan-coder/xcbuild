/**
 Copyright (c) 2015-present, Facebook, Inc.
 All rights reserved.

 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#include <acdriver/Compile/GCLeaderboard.h>
#include <acdriver/CompileOutput.h>
#include <acdriver/Result.h>
#include <libutil/Filesystem.h>

using acdriver::Compile::GCLeaderboard;
using acdriver::CompileOutput;
using acdriver::Result;
using libutil::Filesystem;

bool GCLeaderboard::
Compile(
    std::shared_ptr<xcassets::Asset::GCLeaderboard> const &gcLeaderboard,
    Filesystem *filesystem,
    CompileOutput *compileOutput,
    Result *result)
{
    result->document(
        Result::Severity::Warning,
        gcLeaderboard->path(),
        { CompileOutput::AssetReference(gcLeaderboard) },
        "Not Implemented",
        "gc leaderboard not yet supported");

    return false;
}
