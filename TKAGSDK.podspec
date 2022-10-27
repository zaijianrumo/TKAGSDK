
Pod::Spec.new do |spec|


  spec.name         = "TKAGSDK"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of TKAGSDK."

  spec.description  = <<-DESC
                塔肯广告SDK
                   DESC

  spec.homepage     = "https://github.com/zaijianrumo/TKAGSDK.git"

  spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  spec.author             = { "panpeng" => "panpeng@milulx.com" }

  spec.platform     = :ios, "9.0"

  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/zaijianrumo/TKAGSDK.git", :tag => "#{spec.version}" }

  spec.ios.vendored_frameworks = "TKAGSDK.xcframework"

  spec.framework  = "Security"

  spec.requires_arc = true

  spec.dependency "Protobuf"

end