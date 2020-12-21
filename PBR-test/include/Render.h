#pragma once
#include "scene.h"
#include "camera.h"
#include "ui_text.h"
#include "skybox.h"
struct vec3
{
	float x;
	float y;
	float z;
};

class Render
{
public:
	Entity *player;
public:
	void	init();
	void	set_lights_pos(glm::vec3 **lights, int numb);
	void	draw_scene(std::vector<Entity *> scene, glm::vec3 **lights, Camera *cam, bool free_cam);
	void	draw_pbr(Scene *scene, Camera *cam);
	void	draw_ui(ui_text *Texter, std::vector<text_t*> text);
	void	draw_skybox(Skybox *skybox, Camera* cam);

private:
	glm::mat4	projection;
	glm::mat4	ortProjection;
	vec3		light_pos[3];
};
