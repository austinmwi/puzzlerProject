struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 85 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//12. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//13. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//29. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//30. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//31. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//32. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//33. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//34. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//35. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//36. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//37. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//38. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//39. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//43. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//44. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//45. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//46. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//47. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//48. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//49. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//50. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//53. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//54. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//55. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//56. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//57. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//58. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//59. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//60. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//65. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//66. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//72. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//73. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//74. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//75. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//76. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//77. WindZone
	void RegisterClass_WindZone();
	RegisterClass_WindZone();

	//78. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//79. ReflectionProbe
	void RegisterClass_ReflectionProbe();
	RegisterClass_ReflectionProbe();

	//80. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//81. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//82. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//83. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//84. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
