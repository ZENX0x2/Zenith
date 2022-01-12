#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Zenith
{
	class ZENITH_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
			
	};
}

// Core Log Macros
#define ZT_CORE_TRACE(...)     ::Zenith::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ZT_CORE_INFO(...)      ::Zenith::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ZT_CORE_WARN(...)      ::Zenith::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ZT_CORE_ERROR(...)     ::Zenith::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ZT_CORE_FATAL(...)     ::Zenith::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros

#define ZT_TRACE(...)     ::Zenith::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ZT_INFO(...)      ::Zenith::Log::GetClientLogger()->info(__VA_ARGS__)
#define ZT_WARN(...)      ::Zenith::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ZT_ERROR(...)     ::Zenith::Log::GetClientLogger()->error(__VA_ARGS__)
#define ZT_FATAL(...)     ::Zenith::Log::GetClientLogger()->fatal(__VA_ARGS__)