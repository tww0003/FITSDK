// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "FITSDK",
    platforms: [.iOS(.v15), .watchOS(.v10)],
    products: [
        .library(
            name: "FITSDK",
            targets: ["FITSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "FITSDK",
            path: "FITSDK.xcframework"
        ),
    ],
    swiftLanguageVersions: [.v5]
)
