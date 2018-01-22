# VolumeLight
Volumetric Light Technique using OpenGL I did some time ago.
Still not fully 'polished' (very expensive) but the technique is demonstrated.

The technique is done using GLSL. //VolumeLight.frag and .vert
By Raycasting in the fragment shader. Calculating interceptions between the DepthMap and the ShadowMap.

Also did ShadowMapping on the same project to get more of a realistic scene. //shader.frag .vert

Used:
-SDL(platform), GLEW(opengl), glm(math library), stb-image(image loader) 


