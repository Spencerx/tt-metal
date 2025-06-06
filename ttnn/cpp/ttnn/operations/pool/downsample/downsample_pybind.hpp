// SPDX-FileCopyrightText: © 2024 Tenstorrent Inc.
//
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "ttnn-pybind/pybind_fwd.hpp"

namespace ttnn::operations::downsample {
namespace py = pybind11;
void py_bind_downsample(py::module& module);

}  // namespace ttnn::operations::downsample
