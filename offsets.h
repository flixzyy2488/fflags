#pragma once
/* =============================================================
/*                       RbxDumperV2                            
/*               https://imtheo.lol/Offsets                      
/* -------------------------------------------------------------
/*  Dumped By       : pobeda45
/*  Roblox Version  : version-ad5d3e2906444472
/*  Dumper Version  : 2.7
/*  Dumped At       : 21:57 03/06/2026 (GMT)
/*  Total Offsets   : 222
/* -------------------------------------------------------------
/*  Join the discord!                                           
/*  https://discord.gg/rbxoffsets                               
/* =============================================================
*/


#include <cstdint>
#include <string>
namespace Offsets {
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
         inline constexpr uintptr_t Primitive = 0x148;
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
         inline constexpr uintptr_t FieldOfView = 0x108;
         inline constexpr uintptr_t Position = 0x9c;
         inline constexpr uintptr_t Rotation = 0x78;
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
         inline constexpr uintptr_t BackgroundColor3 = 0x540;
         inline constexpr uintptr_t BackgroundTransparency = 0x564;
         inline constexpr uintptr_t BorderColor3 = 0x54c;
         inline constexpr uintptr_t LayoutOrder = 0x580;
         inline constexpr uintptr_t Position = 0x510;
         inline constexpr uintptr_t RichText = 0xd4a;
         inline constexpr uintptr_t Rotation = 0x188;
         inline constexpr uintptr_t Size = 0x530;
         inline constexpr uintptr_t Text = 0xb58;
         inline constexpr uintptr_t TextColor3 = 0xe50;
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
         inline constexpr uintptr_t JumpHeight = 0x1ac;
         inline constexpr uintptr_t JumpPower = 0x1b0;
         inline constexpr uintptr_t MaxHealth = 0x1b4;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1b8;
         inline constexpr uintptr_t MoveToPoint = 0x17c;
         inline constexpr uintptr_t NameDisplayDistance = 0x1bc;
         inline constexpr uintptr_t NameOcclusion = 0x1c0;
         inline constexpr uintptr_t RequiresNeck = 0x1e9;
         inline constexpr uintptr_t RigType = 0x1cc;
         inline constexpr uintptr_t SeatPart = 0x120;
         inline constexpr uintptr_t Sit = 0x1ea;
         inline constexpr uintptr_t TargetPoint = 0x164;
         inline constexpr uintptr_t UseJumpPower = 0x1ec;
         inline constexpr uintptr_t Walkspeed = 0x1dc;
         inline constexpr uintptr_t WalkspeedCheck = 0x3c4;
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
         inline constexpr uintptr_t This = 0x8;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xe0;
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
         inline constexpr uintptr_t GeographicLatitude = 0x198;
         inline constexpr uintptr_t LightColor = 0x164;
         inline constexpr uintptr_t LightDirection = 0x170;
         inline constexpr uintptr_t MoonPosition = 0x18c;
         inline constexpr uintptr_t OutdoorAmbient = 0x110;
         inline constexpr uintptr_t Sky = 0x1e0;
         inline constexpr uintptr_t Source = 0x17c;
         inline constexpr uintptr_t SunPosition = 0x180;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x1a8;
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

    namespace MeshContentProvider {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t Cache = 0xf0;
         inline constexpr uintptr_t LRUCache = 0x20;
         inline constexpr uintptr_t MeshData = 0x40;
         inline constexpr uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
         inline constexpr uintptr_t FaceEnd = 0x38;
         inline constexpr uintptr_t FaceStart = 0x30;
         inline constexpr uintptr_t VertexEnd = 0x8;
         inline constexpr uintptr_t VertexStart = 0x0;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x300;
         inline constexpr uintptr_t Texture = 0x330;
    }

    namespace Misc {
         inline constexpr uintptr_t Value = 0xd0;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x150;
         inline constexpr uintptr_t Hash = 0x160;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0x108;
         inline constexpr uintptr_t InputObject2 = 0x118;
         inline constexpr uintptr_t MousePosition = 0x9c;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x32c;
         inline constexpr uintptr_t DisplayName = 0x130;
         inline constexpr uintptr_t HealthDisplayDistance = 0x358;
         inline constexpr uintptr_t LocalPlayer = 0x138;
         inline constexpr uintptr_t LocaleId = 0x700;
         inline constexpr uintptr_t ModelInstance = 0x280;
         inline constexpr uintptr_t NameDisplayDistance = 0x368;
         inline constexpr uintptr_t Team = 0x2b0;
         inline constexpr uintptr_t TeamColor = 0x374;
         inline constexpr uintptr_t UserId = 0x2d8;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0x104;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xf8;
         inline constexpr uintptr_t Flags = 0x1b6;
         inline constexpr uintptr_t Position = 0x88;
         inline constexpr uintptr_t Rotation = 0x64;
         inline constexpr uintptr_t Size = 0x8c;
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
         inline constexpr uintptr_t KeyCode = 0x13c;
         inline constexpr uintptr_t MaxActivationDistance = 0x140;
         inline constexpr uintptr_t ObjectText = 0xe8;
         inline constexpr uintptr_t RequiresLineOfSight = 0x14f;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x8;
         inline constexpr uintptr_t LightingValid = 0x170;
         inline constexpr uintptr_t SkyValid = 0x28d;
         inline constexpr uintptr_t VisualEngine = 0x18;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x150;
         inline constexpr uintptr_t Hash = 0x160;
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
         inline constexpr uintptr_t Scale = 0xdc;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t Pointer = 0x7e90548;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xd0;
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

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4c8;
         inline constexpr uintptr_t Enabled = 0x4c9;
         inline constexpr uintptr_t Grip = 0x498;
         inline constexpr uintptr_t ManualActivationOnly = 0x4ca;
         inline constexpr uintptr_t RequiresHandle = 0x4cb;
         inline constexpr uintptr_t Tooltip = 0x478;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x238;
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
