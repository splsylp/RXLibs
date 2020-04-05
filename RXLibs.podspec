Pod::Spec.new do |s|

  s.name         = "RXLibs"
  s.version      = "0.0.2"
  s.summary      = "YunTongXun Libs"
  #s.description  = ""

  s.homepage     = "https://github.com/splsylp/RXLibs"
  s.license      = "MIT"
  s.author       = { "Tony" => "961505161@qq.com" }

  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/splsylp/RXLibs.git", :tag => "0.0.2" }

  s.source_files = "Yuntx/IMHeaders/*.h"
  
  s.resource     = "Yuntx/IMResource/*"

  s.frameworks   = "VideoToolbox", "MessageUI", "CoreTelephony", "CoreGraphics", "CoreFoundation", "AVFoundation", "AudioToolbox"

  s.libraries    = "z", "xml2", "sqlite3", "resolv.9", "icucore", "iconv", "c++", "bz2"

  s.requires_arc = true

end
