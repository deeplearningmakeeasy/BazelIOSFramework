load("@build_bazel_rules_apple//apple:ios.bzl", "ios_static_framework")
load("@build_bazel_rules_apple//apple/internal/resource_rules:apple_resource_bundle.bzl", "apple_resource_bundle")

ios_static_framework(
    name = "MySimpleFramework_static",
    families = [
        "iphone",
        "ipad",
    ],
    minimum_os_version = "13.0",
    deps = [
        ":static_library",
    ],
    bundle_name = "MySimpleFramework",
    hdrs = ["MySimpleFramework/Person.h"]
)

objc_library(
    name = "static_library",
    srcs = ["MySimpleFramework/Person.m"],
    hdrs = glob([
        "MySimpleFramework/Person.h"
        ]),
)

