// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterJanet",
    products: [
        .library(name: "TreeSitterJanet", targets: ["TreeSitterJanet"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterJanet",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterJanetTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterJanet",
            ],
            path: "bindings/swift/TreeSitterJanetTests"
        )
    ],
    cLanguageStandard: .c11
)
