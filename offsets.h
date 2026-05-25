/*
	Dumped using: Polaris 1.0.0
	Made by Xdblaze | GrassBlock
	Website: Dumper.Polaris.Ninja
	Roblox Version: version-2b1721d47abf49aa
	Total Offsets: 183
*/

#pragma once
#include <cstdint>

namespace Offsets {
	namespace FFlagList {
		inline uintptr_t Pointer = 0x7CE13D8;
		inline uintptr_t Value = 0xC0;
	}

	namespace TaskScheduler {
		inline uintptr_t Pointer = 0x7BFE988;
		inline uintptr_t Jobs = 0xC8;
		inline uintptr_t JobName = 0x18;
		inline uintptr_t Fpscap = 0xB0;
	}

	namespace VisualEngine {
		inline uintptr_t Pointer = 0x7BD51F8;
		inline uintptr_t DeviceD3D11 = 0xA0;
		inline uintptr_t ID3D11Device = 0x1C0;
		inline uintptr_t IDXGISwapChain = 0xC8;
		inline uintptr_t WindowHandle = 0xC0;
		inline uintptr_t RenderView = 0xB80;
		inline uintptr_t Dimensions = 0xAA0;
		inline uintptr_t Lighting = 0xB98;
		inline uintptr_t FakeDataModel = 0xA80;
	}

	namespace FakeDataModel {
		inline uintptr_t Pointer = 0x74F6758;
		inline uintptr_t DataModel = 0x1D0;
	}

	namespace DataModel {
		inline uintptr_t GameLoaded = 0x638;
		inline uintptr_t Workspace = 0x178;
		inline uintptr_t CreatorId = 0x190;
		inline uintptr_t GameId = 0x198;
		inline uintptr_t PlaceId = 0x1A0;
		inline uintptr_t JobId = 0x138;
	}

	namespace RenderView {
		inline uintptr_t LightingValid = 0x150;
	}

	namespace Instance {
		inline uintptr_t This = 0x8;
		inline uintptr_t ClassDescriptor = 0x18;
		inline uintptr_t Name = 0xB0;
		inline uintptr_t Parent = 0x70;
		inline uintptr_t Children = 0x78;
	}

	namespace Misc {
		inline uintptr_t Value = 0xD0;
	}

	namespace ClassDescriptor {
		inline uintptr_t ClassName = 0x8;
		inline uintptr_t DescriptorBase = 0x228;
		inline uintptr_t PropertyDescriptors = 0x40;
	}

	namespace PropertyDescriptor {
		inline uintptr_t Name = 0x8;
	}

	namespace Workspace {
		inline uintptr_t World = 0x408;
		inline uintptr_t CurrentCamera = 0x4B0;
	}

	namespace World {
		inline uintptr_t Gravity = 0x210;
		inline uintptr_t WorldSteps = 0x678;
	}

	namespace MouseService {
		inline uintptr_t InputObject = 0x118;
	}

	namespace InputObject {
		inline uintptr_t MousePosition = 0xEC;
	}

	namespace Lighting {
		inline uintptr_t Sky = 0x1E0;
		inline uintptr_t Ambient = 0xE0;
		inline uintptr_t ClockTime = 0x1C0;
		inline uintptr_t GlobalShadows = 0x150;
		inline uintptr_t ShadowSoftness = 0x148;
		inline uintptr_t OutdoorAmbient = 0x110;
		inline uintptr_t GeographicLatitude = 0x198;
		inline uintptr_t Atmosphere = 0x1F0;
		inline uintptr_t Brightness = 0x128;
		inline uintptr_t FogStart = 0x140;
		inline uintptr_t FogEnd = 0x13C;
		inline uintptr_t FogColor = 0x104;
		inline uintptr_t ExposureCompensation = 0x134;
		inline uintptr_t EnvironmentDiffuseScale = 0x12C;
		inline uintptr_t EnvironmentSpecularScale = 0x130;
		inline uintptr_t ColorShiftTop = 0xF8;
		inline uintptr_t ColorShiftBottom = 0xEC;
	}

	namespace LightingParameters {
		inline uintptr_t TrueSunPosition = 0x180;
		inline uintptr_t TrueMoonPosition = 0x18C;
		inline uintptr_t SkyAmbient = 0x158;
		inline uintptr_t SkyAmbient2 = 0x19C;
		inline uintptr_t LightDirection = 0x170;
		inline uintptr_t LightColor = 0x164;
		inline uintptr_t Source = 0x17C;
	}

	namespace Terrain {
		inline uintptr_t GrassLength = 0x1F8;
		inline uintptr_t WaterColor = 0x1E8;
		inline uintptr_t WaterTransparency = 0x204;
		inline uintptr_t WaterReflectance = 0x200;
		inline uintptr_t WaterWaveSpeed = 0x20C;
		inline uintptr_t WaterWaveSize = 0x208;
	}

	namespace Player {
		inline uintptr_t LocalPlayer = 0x138;
		inline uintptr_t UserId = 0x2D8;
		inline uintptr_t DisplayName = 0x130;
		inline uintptr_t LocaleId = 0xD0;
		inline uintptr_t CameraMode = 0x338;
		inline uintptr_t TeamColor = 0x374;
		inline uintptr_t Team = 0x2B0;
		inline uintptr_t ModelInstance = 0x3A8;
	}

	namespace Team {
		inline uintptr_t BrickColor = 0xD0;
	}

	namespace Humanoid {
		inline uintptr_t Sit = 0x1EA;
		inline uintptr_t Jump = 0x1E6;
		inline uintptr_t WalkSpeed = 0x1DC;
		inline uintptr_t WalkSpeedCheck = 0x3C4;
		inline uintptr_t Health = 0x194;
		inline uintptr_t MaxHealth = 0x1B4;
		inline uintptr_t JumpPower = 0x1B0;
		inline uintptr_t JumpHeight = 0x1AC;
		inline uintptr_t UseJumpPower = 0x1EC;
		inline uintptr_t AutoJumpEnabled = 0x1E0;
		inline uintptr_t HipHeight = 0x1A0;
		inline uintptr_t MaxSlopeAngle = 0x1B8;
		inline uintptr_t RequiresNeck = 0x1E9;
		inline uintptr_t AutoRotate = 0x1E1;
		inline uintptr_t RigType = 0x1CC;
		inline uintptr_t WalkToPart = 0x130;
		inline uintptr_t WalkToPoint = 0x17C;
		inline uintptr_t IsWalking = 0x927;
		inline uintptr_t WalkTimer = 0x418;
		inline uintptr_t NameOcclusion = 0x1C0;
		inline uintptr_t NameDisplayDistance = 0x1BC;
		inline uintptr_t DisplayDistanceType = 0x18C;
		inline uintptr_t HealthDisplayDistance = 0x198;
		inline uintptr_t HealthDisplayType = 0x19C;
		inline uintptr_t AutomaticScalingEnabled = 0x1E2;
		inline uintptr_t BreakJointsOnDeath = 0x1E3;
		inline uintptr_t EvaluateStateMachine = 0x1E4;
	}

	namespace Camera {
		inline uintptr_t Subject = 0xE8;
		inline uintptr_t CameraType = 0x158;
		inline uintptr_t Viewport = 0x2E8;
		inline uintptr_t FieldOfView = 0x160;
		inline uintptr_t ImagePlaneDepth = 0x2F0;
		inline uintptr_t CoordinateFrame = 0xF8;
		inline uintptr_t Rotation = 0xF8;
		inline uintptr_t Position = 0x11C;
	}

	namespace SunRaysEffect {
		inline uintptr_t Enabled = 0xC8;
		inline uintptr_t Spread = 0xD4;
		inline uintptr_t Intensity = 0xD0;
	}

	namespace BloomEffect {
		inline uintptr_t Enabled = 0xC8;
		inline uintptr_t Size = 0xD4;
		inline uintptr_t Threshold = 0xD8;
		inline uintptr_t Intensity = 0xD0;
	}

	namespace BlurEffect {
		inline uintptr_t Enabled = 0xC8;
		inline uintptr_t Size = 0xD0;
	}

	namespace BasePart {
		inline uintptr_t Primitive = 0x148;
		inline uintptr_t Shape = 0x1B1;
		inline uintptr_t Color = 0x194;
		inline uintptr_t Transparency = 0xF0;
		inline uintptr_t Reflectance = 0xEC;
		inline uintptr_t CastShadow = 0xF5;
		inline uintptr_t Massless = 0xF7;
		inline uintptr_t Locked = 0xF6;
	}

	namespace Primitive {
		inline uintptr_t CoordinateFrame = 0xC8;
		inline uintptr_t Position = 0xEC;
		inline uintptr_t Rotation = 0xC8;
		inline uintptr_t Material = 0x236;
		inline uintptr_t Size = 0x1B8;
		inline uintptr_t AssemblyLinearVelocity = 0xF8;
		inline uintptr_t AssemblyAngularVelocity = 0x104;
	}

	namespace PrimitiveFlags {
		inline uintptr_t AnchoredMask = 0x2;
		inline uintptr_t CanCollideMask = 0x8;
		inline uintptr_t CanTouchMask = 0x10;
		inline uintptr_t CanQueryMask = 0x20;
	}

	namespace VehicleSeat {
		inline uintptr_t Disabled = 0x228;
		inline uintptr_t HeadsUpDisplay = 0x254;
		inline uintptr_t Occupant = 0x218;
		inline uintptr_t Torque = 0x24C;
		inline uintptr_t MaxSpeed = 0x238;
		inline uintptr_t TurnSpeed = 0x250;
		inline uintptr_t SteerFloat = 0x240;
		inline uintptr_t ThrottleFloat = 0x248;
	}

	namespace Beam {
		inline uintptr_t Enabled = 0x1C4;
		inline uintptr_t FaceCamera = 0x1C5;
		inline uintptr_t Brightness = 0x190;
		inline uintptr_t LightEmission = 0x19C;
		inline uintptr_t LightInfluence = 0x1A0;
		inline uintptr_t Attachment0 = 0x170;
		inline uintptr_t Attachment1 = 0x180;
		inline uintptr_t CurveSize0 = 0x194;
		inline uintptr_t CurveSize1 = 0x198;
		inline uintptr_t Width0 = 0x1B8;
		inline uintptr_t Width1 = 0x1BC;
	}

	namespace LayerCollector {
		inline uintptr_t Enabled = 0x4CC;
		inline uintptr_t ResetOnSpawn = 0x4CD;
		inline uintptr_t ZIndexBehavior = 0x4C8;
	}

	namespace ScreenGui {
		inline uintptr_t DisplayOrder = 0xE0;
	}

	namespace GuiObject {
		inline uintptr_t Active = 0x5B0;
		inline uintptr_t Interactable = 0x5B3;
		inline uintptr_t AnchorPoint = 0x560;
		inline uintptr_t AutomaticSize = 0x568;
		inline uintptr_t SizeConstraint = 0x5A8;
		inline uintptr_t BackgroundColor3 = 0x548;
		inline uintptr_t BackgroundTransparency = 0x56C;
		inline uintptr_t Rotation = 0x5A0;
		inline uintptr_t BorderMode = 0x570;
		inline uintptr_t BorderColor3 = 0x554;
		inline uintptr_t BorderSizePixel = 0x56C;
		inline uintptr_t ClipsDescendants = 0x5B1;
		inline uintptr_t LayoutOrder = 0x56C;
		inline uintptr_t Selectable = 0x5B4;
		inline uintptr_t Visible = 0x5B5;
		inline uintptr_t ZIndex = 0x5AC;
	}

	namespace Frame {
		inline uintptr_t Style = 0x988;
	}

	namespace TextLabel {
		inline uintptr_t Text = 0xB60;
	}
}
