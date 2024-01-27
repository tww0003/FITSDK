set -e

rm -rf FITSDK.xcframework

xcodebuild archive -scheme FitSDK -archivePath FitSDK-watchos.xcarchive -sdk watchos SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES ARCH=arm64
xcodebuild archive -scheme FitSDK -archivePath FitSDK-iphoneos.xcarchive -sdk iphoneos SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES ARCH=arm64
xcodebuild archive -scheme FitSDK -archivePath FitSDK-iphonesimulator.xcarchive -sdk iphonesimulator SKIP_INSTALL=NO BUILD_LIBRARY_FOR_DISTRIBUTION=YES ARCH=arm64 ARCH=x86_64

xcodebuild -create-xcframework -framework FitSDK-iphonesimulator.xcarchive/Products/Library/Frameworks/FitSDK.framework -framework FitSDK-iphoneos.xcarchive/Products/Library/Frameworks/FitSDK.framework -framework FitSDK-watchos.xcarchive/Products/Library/Frameworks/FitSDK.framework -output FITSDK.xcframework

rm -rf FitSDK-watchos.xcarchive
rm -rf FitSDK-iphoneos.xcarchive
rm -rf FitSDK-iphonesimulator.xcarchive
