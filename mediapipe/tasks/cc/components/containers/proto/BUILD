# Copyright 2022 The MediaPipe Authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("//mediapipe/framework/port:build_config.bzl", "mediapipe_proto_library")

package(default_visibility = ["//visibility:public"])

licenses(["notice"])

mediapipe_proto_library(
    name = "classifications_proto",
    srcs = ["classifications.proto"],
    deps = [
        "//mediapipe/framework/formats:classification_proto",
    ],
)

mediapipe_proto_library(
    name = "embeddings_proto",
    srcs = ["embeddings.proto"],
)

mediapipe_proto_library(
    name = "landmarks_detection_result_proto",
    srcs = [
        "landmarks_detection_result.proto",
    ],
    deps = [
        "//mediapipe/framework/formats:classification_proto",
        "//mediapipe/framework/formats:landmark_proto",
        "//mediapipe/framework/formats:rect_proto",
    ],
)
