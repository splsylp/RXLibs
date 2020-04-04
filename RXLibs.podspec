Pod::Spec.new do |s|

  s.name         = "RXLibs"
  s.version      = "0.0.1"
  s.summary      = "YunTongXun Libs"
  #s.description  = ""

  s.homepage     = "https://github.com/splsylp/RXLibs"
  s.license      = "MIT"
  s.author       = { "Tony" => "961505161@qq.com" }

  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/splsylp/RXLibs.git", :tag => s.version }

  s.source_files = "Yuntx/IMHeaders/*.h"
  
  s.resource     = "Yuntx/IMResource/*"

  s.frameworks   = "VideoToolbox", "MessageUI", "CoreTelephony", "CoreGraphics", "CoreFoundation", "AVFoundation", "AudioToolbox"

  s.libraries    = "z", "xml2", "sqlite3", "resolv.9", "icucore", "iconv", "c++", "bz2"

  s.dependency 'AFNetworking'
  s.dependency 'AMapFoundation'
  s.dependency 'AMapSearch'
  s.dependency 'Bugly'
  s.dependency 'DateTools'
  s.dependency 'FLAnimatedImage'
  s.dependency 'FMDB'
  s.dependency 'FSCalendar'
  s.dependency 'GTMBase64'
  s.dependency 'KVOController'
  s.dependency 'MJRefresh'
  s.dependency 'Masonry'
  s.dependency 'PFAudioLib'
  s.dependency 'ReactiveCocoa','2.5'
  s.dependency 'RegexKitLite'
  s.dependency 'SDWebImage'
  s.dependency 'SGQRCode'
  s.dependency 'SQLiteRepairKit'
  s.dependency 'SSZipArchive'
  s.dependency 'SVProgressHUD'
  s.dependency 'SVPullToRefresh'
  s.dependency 'UINavigation-SXFixSpace'
  s.dependency 'UITableView+FDTemplateLayoutCell'
  s.dependency 'WCDB'
  s.dependency 'WechatOpenSDK', '1.8.6'
  s.dependency 'YYModel'
  s.dependency 'YuntxIMLib'

  s.requires_arc = true

end
