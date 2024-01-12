#include "pch.h"
#include "goalspeed-117.h"

/* Plugin Settings Window code here
std::string goalspeed-117::GetPluginName() {
	return "goalspeed-117";
}

void goalspeed-117::SetImGuiContext(uintptr_t ctx) {
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Render the plugin settings here
// This will show up in bakkesmod when the plugin is loaded at
//  f2 -> plugins -> goalspeed-117
void goalspeed-117::RenderSettings() {
	ImGui::TextUnformatted("goalspeed-117 plugin settings");
}
*/

/*
// Do ImGui rendering here
void goalspeed-117::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string goalspeed-117::GetMenuName()
{
	return "goalspeed-117";
}

// Title to give the menu
std::string goalspeed-117::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void goalspeed-117::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool goalspeed-117::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool goalspeed-117::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void goalspeed-117::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void goalspeed-117::OnClose()
{
	isWindowOpen_ = false;
}
*/
