#pragma once
// Offsets dumped by @BlatantExe on discord

#include <cstdint>
#include <string>
namespace offsets {
    inline std::string ClientVersion = "version-ad5d3e2906444472";

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
        inline constexpr uintptr_t CameraSubject = 0xe8;
        inline constexpr uintptr_t CameraType = 0x20;
        inline constexpr uintptr_t FieldOfView = 0x160;
        inline constexpr uintptr_t ImagePlaneDepth = 0x128;
        inline constexpr uintptr_t Position = 0x11c;
        inline constexpr uintptr_t Rotation = 0xf8;
        inline constexpr uintptr_t Viewport = 0x2ac;
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
        inline constexpr uintptr_t CreatorId = 0x190;
        inline constexpr uintptr_t GameId = 0x198;
        inline constexpr uintptr_t GameLoaded = 0x638;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x1a0;
        inline constexpr uintptr_t ServerIP = 0x620;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t Pointer = 0x7901b60;
        inline constexpr uintptr_t RealDataModel = 0x1d0;
    }

    namespace GuiBase2D {
        inline constexpr uintptr_t AbsolutePosition = 0x10c;
        inline constexpr uintptr_t AbsoluteRotation = 0x188;
        inline constexpr uintptr_t AbsoluteSize = 0x118;
    }

    namespace GuiObject {
        inline constexpr uintptr_t Active = 0x5a8;
        inline constexpr uintptr_t AnchorPoint = 0x558;
        inline constexpr uintptr_t AutomaticSize = 0x560;
        inline constexpr uintptr_t BackgroundColor3 = 0x540;
        inline constexpr uintptr_t BackgroundTransparency = 0x564;
        inline constexpr uintptr_t BorderColor3 = 0x54c;
        inline constexpr uintptr_t BorderMode = 0x568;
        inline constexpr uintptr_t BorderSizePixel = 0x56c;
        inline constexpr uintptr_t ClipsDescendants = 0x5a9;
        inline constexpr uintptr_t GuiState = 0x578;
        inline constexpr uintptr_t Interactable = 0x5ab;
        inline constexpr uintptr_t LayoutOrder = 0x580;
        inline constexpr uintptr_t Position = 0x510;
        inline constexpr uintptr_t Rotation = 0x188;
        inline constexpr uintptr_t Selectable = 0x5ac;
        inline constexpr uintptr_t SelectionOrder = 0x59c;
        inline constexpr uintptr_t Size = 0x530;
        inline constexpr uintptr_t SizeConstraint = 0x5a0;
        inline constexpr uintptr_t Visible = 0x5ad;
        inline constexpr uintptr_t ZIndex = 0x5a4;
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
        inline constexpr uintptr_t HumanoidState = 0x8a0;
        inline constexpr uintptr_t HumanoidStateID = 0x20;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t MoveDirection = 0x158;
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
        inline constexpr uintptr_t Walkspeed = 0x1dc;
        inline constexpr uintptr_t WalkspeedCheck = 0x3c4;
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
        inline constexpr uintptr_t Ambient = 0xe0;
        inline constexpr uintptr_t Atmosphere = 0x1f0;
        inline constexpr uintptr_t Brightness = 0x128;
        inline constexpr uintptr_t ClockTime = 0x1c0;
        inline constexpr uintptr_t ColorShift_Bottom = 0xec;
        inline constexpr uintptr_t ColorShift_Top = 0xf8;
        inline constexpr uintptr_t EnvironmentDiffuseScale = 0x12c;
        inline constexpr uintptr_t EnvironmentSpecularScale = 0x130;
        inline constexpr uintptr_t ExposureCompensation = 0x134;
        inline constexpr uintptr_t FogColor = 0x104;
        inline constexpr uintptr_t FogEnd = 0x13c;
        inline constexpr uintptr_t FogStart = 0x140;
        inline constexpr uintptr_t GradientBottom = 0x19c;
        inline constexpr uintptr_t GradientTop = 0x158;
        inline constexpr uintptr_t MoonPosition = 0x18c;
        inline constexpr uintptr_t OutdoorAmbient = 0x110;
        inline constexpr uintptr_t ShadowSoftness = 0x148;
        inline constexpr uintptr_t Sky = 0x1e0;
        inline constexpr uintptr_t SunPosition = 0x180;
    }

    namespace LightingParameters {
        inline constexpr uintptr_t GeographicLatitude = 0x198;
        inline constexpr uintptr_t LightColor = 0x164;
        inline constexpr uintptr_t LightDirection = 0x170;
        inline constexpr uintptr_t SkyAmbient = 0x158;
        inline constexpr uintptr_t SkyAmbient2 = 0x19c;
        inline constexpr uintptr_t Source = 0x17c;
        inline constexpr uintptr_t TrueMoonPosition = 0x18c;
        inline constexpr uintptr_t TrueSunPosition = 0x180;
    }

    namespace LocalScript {
        inline constexpr uintptr_t ByteCode = 0x1a8;
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
        inline constexpr uintptr_t MeshId = 0x300;
        inline constexpr uintptr_t TextureId = 0x330;
    }

    namespace Misc {
        inline constexpr uintptr_t Adornee = 0x108;
        inline constexpr uintptr_t AnimationId = 0xd0;
        inline constexpr uintptr_t StringLength = 0x10;
        inline constexpr uintptr_t Value = 0xd0;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ByteCode = 0x150;
        inline constexpr uintptr_t Bytecode = 0x150;
        inline constexpr uintptr_t Hash = 0x160;
    }

    namespace MouseService {
        inline constexpr uintptr_t InputObject = 0x118;
        inline constexpr uintptr_t MousePosition = 0xec;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x32c;
        inline constexpr uintptr_t CameraMode = 0x20;
        inline constexpr uintptr_t Character = 0x3a8;
        inline constexpr uintptr_t HealthDisplayDistance = 0x358;
        inline constexpr uintptr_t LocalPlayer = 0x138;
        inline constexpr uintptr_t LocaleId = 0x700;
        inline constexpr uintptr_t MaxZoomDistance = 0x330;
        inline constexpr uintptr_t MinZoomDistance = 0x334;
        inline constexpr uintptr_t ModelInstance = 0x280;
        inline constexpr uintptr_t NameDisplayDistance = 0x368;
        inline constexpr uintptr_t Team = 0x2b0;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t TeamColor = 0x374;
        inline constexpr uintptr_t UserId = 0x2d8;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x138;
    }

    namespace Primitive {
        inline constexpr uintptr_t AssemblyAngularVelocity = 0x104;
        inline constexpr uintptr_t AssemblyLinearVelocity = 0xf8;
        inline constexpr uintptr_t CFrame = 0xc8;
        inline constexpr uintptr_t Flags = 0x1b6;
        inline constexpr uintptr_t Material = 0x236;
        inline constexpr uintptr_t Orientation = 0xc8;
        inline constexpr uintptr_t Position = 0xec;
        inline constexpr uintptr_t PrimitiveFlags = 0x1b6;
        inline constexpr uintptr_t Rotation = 0xc8;
        inline constexpr uintptr_t Size = 0x1b8;
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
        inline constexpr uintptr_t LightingValid = 0x170;
        inline constexpr uintptr_t SkyValid = 0x28d;
        inline constexpr uintptr_t SkyboxValid = 0x28d;
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
        inline constexpr uintptr_t MaxFps = 0xb0;
        inline constexpr uintptr_t Pointer = 0x7e90548;
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
        inline constexpr uintptr_t AutoButtonColor = 0x9c4;
        inline constexpr uintptr_t ContentText = 0xdd8;
        inline constexpr uintptr_t Font = 0x10e8;
        inline constexpr uintptr_t LineHeight = 0xed0;
        inline constexpr uintptr_t LocalizedText = 0xdd8;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0x10f4;
        inline constexpr uintptr_t Modal = 0x9c5;
        inline constexpr uintptr_t RichText = 0xfca;
        inline constexpr uintptr_t Selected = 0x9c6;
        inline constexpr uintptr_t Text = 0xdd8;
        inline constexpr uintptr_t TextColor3 = 0x10d0;
        inline constexpr uintptr_t TextDirection = 0xf70;
        inline constexpr uintptr_t TextScaled = 0xfc2;
        inline constexpr uintptr_t TextSize = 0x10fc;
        inline constexpr uintptr_t TextStrokeColor3 = 0x10dc;
        inline constexpr uintptr_t TextStrokeTransparency = 0x1100;
        inline constexpr uintptr_t TextTransparency = 0x1104;
        inline constexpr uintptr_t TextTruncate = 0x1108;
        inline constexpr uintptr_t TextWrapped = 0xfc4;
        inline constexpr uintptr_t TextXAlignment = 0x110c;
        inline constexpr uintptr_t TextYAlignment = 0xf18;
    }

    namespace TextLabel {
        inline constexpr uintptr_t ContentText = 0xb58;
        inline constexpr uintptr_t Font = 0xe68;
        inline constexpr uintptr_t LineHeight = 0xc50;
        inline constexpr uintptr_t LocalizedText = 0xb58;
        inline constexpr uintptr_t MaxVisibleGraphemes = 0xe74;
        inline constexpr uintptr_t RichText = 0xd4a;
        inline constexpr uintptr_t Text = 0xb58;
        inline constexpr uintptr_t TextColor3 = 0xe50;
        inline constexpr uintptr_t TextDirection = 0xcf0;
        inline constexpr uintptr_t TextScaled = 0xd42;
        inline constexpr uintptr_t TextSize = 0xe7c;
        inline constexpr uintptr_t TextStrokeColor3 = 0xe5c;
        inline constexpr uintptr_t TextStrokeTransparency = 0xe80;
        inline constexpr uintptr_t TextTransparency = 0xe84;
        inline constexpr uintptr_t TextTruncate = 0xe88;
        inline constexpr uintptr_t TextWrapped = 0xd42;
        inline constexpr uintptr_t TextXAlignment = 0xe8c;
        inline constexpr uintptr_t TextYAlignment = 0xc98;
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
        inline constexpr uintptr_t Dimensions = 0xab0;
        inline constexpr uintptr_t FakeDataModel = 0xa90;
        inline constexpr uintptr_t Pointer = 0x801dfb0;
        inline constexpr uintptr_t RenderView = 0xbb0;
        inline constexpr uintptr_t ViewMatrix = 0x150;
    }

    namespace Workspace {
        inline constexpr uintptr_t CurrentCamera = 0x4b0;
        inline constexpr uintptr_t ReadOnlyGravity = 0x9f0;
        inline constexpr uintptr_t World = 0x408;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x210;
        inline constexpr uintptr_t Primitives = 0x280;
        inline constexpr uintptr_t worldStepsPerSec = 0x678;
    }

}
