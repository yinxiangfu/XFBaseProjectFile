Pod::Spec.new do |spec|
  spec.name         = "XFBaseProjectFile"
  spec.version      = "1.0.0"
  spec.summary      = "初始化项目一些基本文件"
  spec.description  = <<-DESC
			             封装一些项目初始化需要的文件和代码。
                         DESC
  spec.homepage     = "https://github.com/yinxiangfu/XFBaseProjectFile.git"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "yinxiangfu" => "2014759954@qq.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/yinxiangfu/XFBaseProjectFile.git", :tag => "#{spec.version}" }

#  spec.source_files = 
#"XFBaseProjectFile/Base/DDLog/*{h,m}",
#"XFBaseProjectFile/Base/Model/*{h,m}",
#"XFBaseProjectFile/Base/UI/*{h,m}",
#"XFBaseProjectFile/Base/Protocols/*{h,m}",
#"XFBaseProjectFile/Public/Category/UI/*{h,m}",
#"XFBaseProjectFile/Public/Macros/*{h,m}"
 
  spec.public_header_files = "XFBaseProjectFile/Public/Macros/XFDefineHeader.h"
  spec.source_files        = "XFBaseProjectFile/Public/Macros/XFDefineHeader.h"

  spec.framework    = "UIKit"
  spec.requires_arc = true
  spec.dependency "CocoaLumberjack"
  spec.dependency "Masonry"
  
  spec.subspec "Base" do |ss|
       ss.subspec "Protocols" do |sss|
          sss.source_files = "XFBaseProjectFile/Base/Protocols/*h"
       end
       ss.subspec "UI" do |sss|
          sss.source_files = "XFBaseProjectFile/Base/UI/*{h,m}"
          sss.dependency "XFBaseProjectFile/Base/Protocols"
          sss.dependency "XFBaseProjectFile/Public/Macros"
       end
       ss.subspec "Model" do |sss|
          sss.source_files = "XFBaseProjectFile/Base/Model/*{h,m}"
          sss.dependency "XFBaseProjectFile/Base/Protocols"
       end
       ss.subspec "DDLog" do |sss|
          sss.source_files = "XFBaseProjectFile/Base/DDLog/*{h,m}"
       end
  end
  spec.subspec "Public" do |ss|
       ss.subspec "Macros" do |sss|
          sss.source_files = "XFBaseProjectFile/Public/Macros/*h"
          sss.dependency "XFBaseProjectFile/Public/Category/UI"
       end
       ss.subspec "Category" do |sss|
          sss.subspec "UI" do |ssss|
              ssss.source_files = "XFBaseProjectFile/Public/Category/UI/*{h,m}"
          end
       end
    end

 end

