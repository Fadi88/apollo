/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "gtest/gtest.h"

#include "modules/perception/base/common.h"

namespace apollo {
namespace perception {
namespace base {

TEST(CommonTest, GPUAssertTest) {
#ifndef PERCEPTION_CPU_ONLY
  GPUAssert(cudaSetDevice(-1), __FILE__, __LINE__, false);
#endif
}

}  // namespace base
}  // namespace perception
}  // namespace apollo
