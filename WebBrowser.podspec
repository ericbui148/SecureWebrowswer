Pod::Spec.new do |s|
    s.name             = "WebBrowser"
    s.version          = "1.0.0"
    s.summary          = "WebBrowswer is an ios secure browser"
    s.description      = <<-DESC
                            Extension function, through JavaScript injection to expand the function, select in the menu -> extension page, currently includes (if you have the desired function, or it is better to directly add the code, you are welcome to put forward in the Issue):
                            no image mode. Block Baidu ads and banner promotions [open by default]. Eye protection mode (multiple colors available)
                            Multi-tab browsing. Cold boot restore browsing records, including current page and forward and backward pages (session restore, includes current page and backforward list)
                            Multi-window management, edge pan to switch windows. Bookmark, history management (bookmark, history manage)
                            find in page. Click the title bar to access or search the page (tap the title bar to input url for surf or key to search)
                            Automatic monitoring of clipboard URLs, which can be opened in a new window
                         DESC
    s.homepage         = "https://github.com/ericbui148/SecureWebroswer"
    s.source           = { :git => "https://github.com/ericbui148/SecureWebroswer", :tag => "#{s.version}" }
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { "Eric B" => "bthiep148@gmail.com" }  
    s.platform     = :ios, '10.0'
    s.ios.deployment_target = '10.0'
    s.requires_arc = true
    s.source_files = 'WebBrowser/**/**/*.{h,m}'
    s.resources = "WebBrowser/**/*.{xcassets}"
    s.public_header_files = 'WebBrowser/Browser/Controller/*.h'
    s.dependency 'AFNetworking'
    s.dependency 'CocoaLumberjack'
    s.dependency 'MBProgressHUD'
    s.dependency 'GCDWebServer'
    s.dependency 'SDWebImage'
    s.dependency 'Mantle'
  end
