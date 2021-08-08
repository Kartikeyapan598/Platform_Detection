-- premake5.lua
-- ChotuEditor Project

workspace "Platform"
	architecture "x64"

	configurations{
		"Debug",
		"Release"
	}

	startproject "Test"

	flags{
		"MultiProcessorCompile",
		"FloatFast"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Platform_Detection"
	location "Platform_Detection"
	kind "StaticLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs{
		"%{prj.name}/src"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"
	
	filter "configurations:Debug"
		defines "CR_DEBUG"
		symbols "on"

	filter "configurations:Release"
		defines "CR_RELEASE"
		optimize "on"


project "Test"	
	location "Test"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs{
		"Platform_Detection/src"
	}

	links{
		"Platform_Detection"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "on"
		systemversion "latest"
	
	filter "configurations:Debug"
		defines "CR_DEBUG"
		symbols "on"

	filter "configurations:Release"
		defines "CR_RELEASE"
		optimize "on"