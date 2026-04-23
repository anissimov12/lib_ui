// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2026
#pragma once

namespace AyuUiSettings {

inline constexpr int kMaxAvatarCorners = 23;
inline constexpr int kDefaultCursorBlinkDelay = 500;
inline constexpr int kMinCursorBlinkDelay = 100;
inline constexpr int kMaxCursorBlinkDelay = 2000;

enum class CursorShape {
	Default = 0,
	Line = 1,
	Block = 2,
	Underline = 3,
};

void setMonoFont(QString newFont);
QString getMonoFont();

void setWideMultiplier(double val);
bool isWideMultiplied();
int getWideMultiplied(int width, double mult);

void setMaterialSwitches(bool val);
bool isMaterialSwitches();

void setAvatarCorners(int val);
int getAvatarCorners();

void setCursorShape(CursorShape shape);
CursorShape getCursorShape();

void setCursorBlinkDelay(int ms);
int getCursorBlinkDelay();

void setCursorAnimationEnabled(bool enabled);
bool isCursorAnimationEnabled();

void setCursorAnimationSpeed(int percent);
int getCursorAnimationSpeed();

}
