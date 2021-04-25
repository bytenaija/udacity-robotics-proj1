#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginProjOne : public WorldPlugin
  {
    public: WorldPluginProjOne() : WorldPlugin()
            {
              printf("Greetings human! I come in peace\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginProjOne)
}
