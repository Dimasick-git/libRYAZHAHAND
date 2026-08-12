#pragma once

#include <cstdint>

namespace ult {

// Shared UI preference for overlays that consume libryazhahand.
// The Switch 2 appearance is intentionally enabled unless a user disables it.
extern bool useSwitch2Style;

namespace switch2 {

// RGBA4444 design tokens shared by all Ryazhahand-based overlays.
inline constexpr std::uint16_t FocusAccent  = 0x06EF;
inline constexpr std::uint16_t FocusBackdrop = 0x111F;
inline constexpr std::uint16_t FocusShadow  = 0x000F;
inline constexpr std::uint16_t ToggleOn     = 0x06EF;
inline constexpr std::uint16_t ToggleOff    = 0x555F;
inline constexpr std::uint16_t ToggleKnob   = 0xFFFF;
inline constexpr std::uint16_t FooterFill   = 0x222F;
inline constexpr std::uint16_t FooterBorder = 0x777F;
inline constexpr std::int16_t  FocusRadius  = 1;
inline constexpr std::int16_t  ToggleWidth  = 48;
inline constexpr std::int16_t  ToggleHeight = 26;

} // namespace switch2

} // namespace ult
