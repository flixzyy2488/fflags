#pragma once
/* =============================================================
/*                       RbxDumperV2                            
/*               https://imtheo.lol/Offsets
/* -------------------------------------------------------------
/*  Dumped By       : pobeda45
/*  Roblox Version  : version-acc4b74f79e743b9
/*  Dumper Version  : 2.7
/*  Dumped At       : 2026-05-05 17:11:13
/*  Total Offsets   : 281
/* -------------------------------------------------------------
*/


#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-acc4b74f79e743b9";

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xd0;
         inline constexpr uintptr_t Decay = 0xdc;
         inline constexpr uintptr_t Density = 0xe8;
         inline constexpr uintptr_t Glare = 0xec;
         inline constexpr uintptr_t Haze = 0xf0;
         inline constexpr uintptr_t Offset = 0xf4;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0xf5;
         inline constexpr uintptr_t Color3 = 0x194;
         inline constexpr uintptr_t Locked = 0xf6;
         inline constexpr uintptr_t Massless = 0xf7;
         inline constexpr uintptr_t Primitive = 0x148;
         inline constexpr uintptr_t Reflectance = 0xec;
         inline constexpr uintptr_t Shape = 0x1b1;
         inline constexpr uintptr_t Transparency = 0xf0;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Intensity = 0xd0;
         inline constexpr uintptr_t Size = 0xd4;
         inline constexpr uintptr_t Threshold = 0xd8;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x10;
         inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
         inline constexpr uintptr_t CFrame = 0xf8;
         inline constexpr uintptr_t FieldOfView = 0x160;
         inline constexpr uintptr_t Position = 0x11c;
         inline constexpr uintptr_t Rotation = 0xf8;
         inline constexpr uintptr_t ViewportInt16 = 0x2ac;
         inline constexpr uintptr_t ViewportSize = 0x2e8;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xe0;
         inline constexpr uintptr_t BodyPart = 0x160;
         inline constexpr uintptr_t MeshId = 0x110;
         inline constexpr uintptr_t OverlayTextureId = 0x140;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x188;
         inline constexpr uintptr_t GameId = 0x190;
         inline constexpr uintptr_t GameLoaded = 0x5f8;
         inline constexpr uintptr_t JobId = 0x138;
         inline constexpr uintptr_t PlaceId = 0x198;
         inline constexpr uintptr_t ServerIP = 0x5e0;
         inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x7c1a148;
         inline constexpr uintptr_t RealDataModel = 0x1d0;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0x10c;
         inline constexpr uintptr_t AbsoluteRotation = 0x188;
         inline constexpr uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
         inline constexpr uintptr_t Active = 0x5b0;
         inline constexpr uintptr_t AnchorPoint = 0x560;
         inline constexpr uintptr_t AutomaticSize = 0x568;
         inline constexpr uintptr_t BackgroundColor3 = 0x548;
         inline constexpr uintptr_t BackgroundTransparency = 0x56c;
         inline constexpr uintptr_t BorderColor3 = 0x554;
         inline constexpr uintptr_t BorderMode = 0x570;
         inline constexpr uintptr_t BorderSizePixel = 0x574;
         inline constexpr uintptr_t ClipsDescendants = 0x5b1;
         inline constexpr uintptr_t GuiState = 0x580;
         inline constexpr uintptr_t Interactable = 0x5b3;
         inline constexpr uintptr_t LayoutOrder = 0x588;
         inline constexpr uintptr_t Position = 0x518;
         inline constexpr uintptr_t Rotation = 0x188;
         inline constexpr uintptr_t Selectable = 0x5b4;
         inline constexpr uintptr_t SelectionOrder = 0x5a4;
         inline constexpr uintptr_t Size = 0x538;
         inline constexpr uintptr_t SizeConstraint = 0x5a8;
         inline constexpr uintptr_t Visible = 0x5b5;
         inline constexpr uintptr_t ZIndex = 0x5ac;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1e0;
         inline constexpr uintptr_t AutoRotate = 0x1e1;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1e2;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x1e3;
         inline constexpr uintptr_t CameraOffset = 0x140;
         inline constexpr uintptr_t DisplayDistanceType = 0x18c;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1e4;
         inline constexpr uintptr_t Health = 0x194;
         inline constexpr uintptr_t HealthDisplayDistance = 0x198;
         inline constexpr uintptr_t HealthDisplayType = 0x19c;
         inline constexpr uintptr_t HipHeight = 0x1a0;
         inline constexpr uintptr_t JumpHeight = 0x1ac;
         inline constexpr uintptr_t JumpPower = 0x1b0;
         inline constexpr uintptr_t MaxHealth = 0x1b4;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1b8;
         inline constexpr uintptr_t NameDisplayDistance = 0x1bc;
         inline constexpr uintptr_t NameOcclusion = 0x1c0;
         inline constexpr uintptr_t RequiresNeck = 0x1e9;
         inline constexpr uintptr_t RigType = 0x1cc;
         inline constexpr uintptr_t SeatPart = 0x120;
         inline constexpr uintptr_t Sit = 0x1ea;
         inline constexpr uintptr_t TargetPoint = 0x164;
         inline constexpr uintptr_t UseJumpPower = 0x1ec;
         inline constexpr uintptr_t WalkSpeed = 0x1dc;
         inline constexpr uintptr_t WalkSpeedCheck = 0x3c4;
         inline constexpr uintptr_t WalkToPoint = 0x17c;
    }

    namespace InputObject {
         inline constexpr uintptr_t MousePosition = 0xec;
    }

    namespace Instance {
         inline constexpr uintptr_t AttributeContainer = 0x48;
         inline constexpr uintptr_t AttributeList = 0x18;
         inline constexpr uintptr_t AttributeToNext = 0x58;
         inline constexpr uintptr_t AttributeToValue = 0x18;
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0xb0;
         inline constexpr uintptr_t Parent = 0x70;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xd8;
         inline constexpr uintptr_t Atmosphere = 0x1e8;
         inline constexpr uintptr_t Brightness = 0x120;
         inline constexpr uintptr_t ClockTime = 0x1b8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xe4;
         inline constexpr uintptr_t ColorShift_Top = 0xf0;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x124;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x128;
         inline constexpr uintptr_t ExposureCompensation = 0x12c;
         inline constexpr uintptr_t FogColor = 0xfc;
         inline constexpr uintptr_t FogEnd = 0x134;
         inline constexpr uintptr_t FogStart = 0x138;
         inline constexpr uintptr_t OutdoorAmbient = 0x108;
         inline constexpr uintptr_t ShadowSoftness = 0x140;
         inline constexpr uintptr_t Sky = 0x1d8;
    }

    namespace LightingParameters {
         inline constexpr uintptr_t GeographicLatitude = 0x190;
         inline constexpr uintptr_t LightColor = 0x15c;
         inline constexpr uintptr_t LightDirection = 0x168;
         inline constexpr uintptr_t SkyAmbient = 0x150;
         inline constexpr uintptr_t SkyAmbient2 = 0x194;
         inline constexpr uintptr_t Source = 0x174;
         inline constexpr uintptr_t TrueMoonPosition = 0x184;
         inline constexpr uintptr_t TrueSunPosition = 0x178;
    }

    namespace LocalScript {
         inline constexpr uintptr_t Bytecode = 0x1a8;
         inline constexpr uintptr_t Hash = 0x1b8;
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xf;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xc;
         inline constexpr uintptr_t CrackedLava = 0x2d;
         inline constexpr uintptr_t Glacier = 0x1b;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2a;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3f;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3c;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1e;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x2f8;
         inline constexpr uintptr_t TextureId = 0x328;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t Bytecode = 0x150;
         inline constexpr uintptr_t Hash = 0x160;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0x100;
         inline constexpr uintptr_t InputObject2 = 0x110;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x31c;
         inline constexpr uintptr_t Character = 0x398;
         inline constexpr uintptr_t DisplayName = 0x130;
         inline constexpr uintptr_t HealthDisplayDistance = 0x348;
         inline constexpr uintptr_t LocalPlayer = 0x130;
         inline constexpr uintptr_t LocaleId = 0x6d0;
         inline constexpr uintptr_t NameDisplayDistance = 0x358;
         inline constexpr uintptr_t Team = 0x2a0;
         inline constexpr uintptr_t TeamColor = 0x364;
         inline constexpr uintptr_t UserId = 0x2c8;
    }

    namespace Players {
         inline constexpr uintptr_t LocalPlayer = 0x130;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xfc;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xf0;
         inline constexpr uintptr_t CFrame = 0xc0;
         inline constexpr uintptr_t Material = 0x22e;
         inline constexpr uintptr_t Orientation = 0xc0;
         inline constexpr uintptr_t Position = 0xe4;
         inline constexpr uintptr_t PrimitiveFlags = 0x1ae;
         inline constexpr uintptr_t Rotation = 0xc0;
         inline constexpr uintptr_t Size = 0x1b0;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xc8;
         inline constexpr uintptr_t Enabled = 0x14e;
         inline constexpr uintptr_t HoldDuration = 0x138;
         inline constexpr uintptr_t KeyboardKeyCode = 0x13c;
         inline constexpr uintptr_t MaxActivationDistance = 0x140;
         inline constexpr uintptr_t ObjectText = 0xe8;
         inline constexpr uintptr_t RequiresLineOfSight = 0x14f;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x8;
         inline constexpr uintptr_t LightingValid = 0x148;
         inline constexpr uintptr_t SkyboxValid = 0x28d;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x928;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x220;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x25c;
         inline constexpr uintptr_t MoonTextureId = 0xe0;
         inline constexpr uintptr_t SkyboxBk = 0x110;
         inline constexpr uintptr_t SkyboxDn = 0x140;
         inline constexpr uintptr_t SkyboxFt = 0x170;
         inline constexpr uintptr_t SkyboxLf = 0x1a0;
         inline constexpr uintptr_t SkyboxOrientation = 0x250;
         inline constexpr uintptr_t SkyboxRt = 0x1d0;
         inline constexpr uintptr_t SkyboxUp = 0x200;
         inline constexpr uintptr_t StarCount = 0x260;
         inline constexpr uintptr_t SunAngularSize = 0x264;
         inline constexpr uintptr_t SunTextureId = 0x230;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0x108;
         inline constexpr uintptr_t Offset = 0xd0;
         inline constexpr uintptr_t Scale = 0xdc;
         inline constexpr uintptr_t TextureId = 0x130;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t Pointer = 0x7cf5400;
    }

    namespace Team {
         inline constexpr uintptr_t TeamColor = 0xd0;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1f8;
         inline constexpr uintptr_t MaterialColors = 0x2a8;
         inline constexpr uintptr_t WaterColor = 0x1e8;
         inline constexpr uintptr_t WaterReflectance = 0x200;
         inline constexpr uintptr_t WaterTransparency = 0x204;
         inline constexpr uintptr_t WaterWaveSize = 0x208;
         inline constexpr uintptr_t WaterWaveSpeed = 0x20c;
    }

    namespace TextButton {
         inline constexpr uintptr_t AutoButtonColor = 0x9cc;
         inline constexpr uintptr_t ContentText = 0xce0;
         inline constexpr uintptr_t Font = 0x1108;
         inline constexpr uintptr_t LineHeight = 0xd54;
         inline constexpr uintptr_t LocalizedText = 0xce0;
         inline constexpr uintptr_t MaxVisibleGraphemes = 0x1114;
         inline constexpr uintptr_t Modal = 0x9cd;
         inline constexpr uintptr_t RichText = 0xdfd;
         inline constexpr uintptr_t Selected = 0x9ce;
         inline constexpr uintptr_t Text = 0xce0;
         inline constexpr uintptr_t TextColor3 = 0x10f0;
         inline constexpr uintptr_t TextDirection = 0xe00;
         inline constexpr uintptr_t TextScaled = 0xd50;
         inline constexpr uintptr_t TextSize = 0x111c;
         inline constexpr uintptr_t TextStrokeColor3 = 0x10fc;
         inline constexpr uintptr_t TextStrokeTransparency = 0x1120;
         inline constexpr uintptr_t TextTransparency = 0x1124;
         inline constexpr uintptr_t TextTruncate = 0x1128;
         inline constexpr uintptr_t TextWrapped = 0xda0;
         inline constexpr uintptr_t TextXAlignment = 0x112c;
         inline constexpr uintptr_t TextYAlignment = 0xd9c;
    }

    namespace TextLabel {
         inline constexpr uintptr_t ContentText = 0xa60;
         inline constexpr uintptr_t Font = 0xe88;
         inline constexpr uintptr_t LineHeight = 0xad4;
         inline constexpr uintptr_t LocalizedText = 0xa60;
         inline constexpr uintptr_t MaxVisibleGraphemes = 0xe94;
         inline constexpr uintptr_t RichText = 0xb7d;
         inline constexpr uintptr_t Text = 0xa60;
         inline constexpr uintptr_t TextColor3 = 0xe70;
         inline constexpr uintptr_t TextDirection = 0xb80;
         inline constexpr uintptr_t TextScaled = 0xad0;
         inline constexpr uintptr_t TextSize = 0xe9c;
         inline constexpr uintptr_t TextStrokeColor3 = 0xe7c;
         inline constexpr uintptr_t TextStrokeTransparency = 0xea0;
         inline constexpr uintptr_t TextTransparency = 0xea4;
         inline constexpr uintptr_t TextTruncate = 0xea8;
         inline constexpr uintptr_t TextWrapped = 0xb20;
         inline constexpr uintptr_t TextXAlignment = 0xeac;
         inline constexpr uintptr_t TextYAlignment = 0xb1c;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4c8;
         inline constexpr uintptr_t Enabled = 0x4c9;
         inline constexpr uintptr_t Grip = 0x498;
         inline constexpr uintptr_t GripForward = 0x4b0;
         inline constexpr uintptr_t GripPos = 0x4bc;
         inline constexpr uintptr_t GripRight = 0x498;
         inline constexpr uintptr_t GripUp = 0x4a4;
         inline constexpr uintptr_t ManualActivationOnly = 0x4ca;
         inline constexpr uintptr_t RequiresHandle = 0x4cb;
         inline constexpr uintptr_t Tooltip = 0x478;
    }

    namespace Value {
         inline constexpr uintptr_t Value = 0xd0;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x238;
         inline constexpr uintptr_t Occupant = 0x218;
         inline constexpr uintptr_t SteerFloat = 0x240;
         inline constexpr uintptr_t ThrottleFloat = 0x248;
         inline constexpr uintptr_t Torque = 0x24c;
         inline constexpr uintptr_t TurnSpeed = 0x250;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xa90;
         inline constexpr uintptr_t FakeDataModel = 0xa70;
         inline constexpr uintptr_t Pointer = 0x77c6670;
         inline constexpr uintptr_t RenderView = 0xb70;
         inline constexpr uintptr_t ViewMatrix = 0x130;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x490;
         inline constexpr uintptr_t ReadOnlyGravity = 0x9b8;
         inline constexpr uintptr_t World = 0x408;
    }

    namespace World {
         inline constexpr uintptr_t Gravity = 0x210;
         inline constexpr uintptr_t Primitives = 0x280;
         inline constexpr uintptr_t WorldSteps = 0x6b8;
    }

}
