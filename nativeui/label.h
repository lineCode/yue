// Copyright 2016 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the license that can be found in the
// LICENSE file.

#ifndef NATIVEUI_LABEL_H_
#define NATIVEUI_LABEL_H_

#include "nativeui/view.h"

namespace nu {

class Label : public View {
 public:
  Label();
  ~Label() override;

 private:
  DISALLOW_COPY_AND_ASSIGN(Label);
};

}  // namespace nu

#endif  // NATIVEUI_LABEL_H_