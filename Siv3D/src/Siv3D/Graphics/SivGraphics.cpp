//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2019 Ryo Suzuki
//	Copyright (c) 2016-2019 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/Graphics.hpp>
# include <Siv3D/Monitor.hpp>
# include <Siv3DEngine.hpp>
# include "IGraphics.hpp"

namespace s3d
{
	namespace Graphics
	{
		void SkipClearScreen()
		{
			#if 000
			Siv3DEngine::Get<ISiv3DGraphics>()->skipClearScreen();
			#endif
		}

		Array<Size> GetFullscreenResolutions(const double minRefreshRate)
		{
#if 000
			const Array<DisplayOutput> outputs = Graphics::EnumOutputs();
			const size_t currentMonitorIndex = System::GetCurrentMonitorIndex();

			if (currentMonitorIndex > outputs.size())
			{
				return{};
			}
#endif
			Array<Size> availableResolutions;
#if 000
			for (const auto& displayMode : outputs[currentMonitorIndex].displayModes)
			{
				const Size resolution = displayMode.size;

				if ((displayMode.refreshRateHz > minRefreshRate)
					&& !availableResolutions.includes(resolution))
				{
					availableResolutions << resolution;
				}
			}
#endif
			return availableResolutions;
		}

		void SetTargetFrameRateHz(const Optional<double>& targetFrameRateHz)
		{
#if 000
			Siv3DEngine::Get<ISiv3DGraphics>()->setTargetFrameRateHz(targetFrameRateHz);
#endif
		}

		Optional<double> GetTargetFrameRateHz()
		{
#if 000
			return Siv3DEngine::Get<ISiv3DGraphics>()->getTargetFrameRateHz();
#endif
		}

		double GetDisplayRefreshRateHz()
		{
#if 000			
			return Siv3DEngine::Get<ISiv3DGraphics>()->getDisplayRefreshRateHz();
#endif
		}

		double GetDPIScaling()
		{
#if 000
			return Siv3DEngine::Get<ISiv3DGraphics>()->getDPIScaling();
#endif
		}
	}
}
