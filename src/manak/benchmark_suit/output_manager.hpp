#ifndef MANAK_OUTPUT_MANAGER_HPP_INCLUDED
#define MANAK_OUTPUT_MANAGER_HPP_INCLUDED

#include <list>

#include "output_handler.hpp"
#include "txt_output_handler.hpp"

namespace manak
{

class OutputManager
{
 public:
  static OutputManager& GlobalOutputManager()
  {
    static OutputManager singleton;
    return singleton;
  }

  ~OutputManager()
  {
    for(auto oh : handlers)
    {
      delete oh;
    }
  }

  void AddHandler(OutputHandler* handler);

  void Initialize(const std::map<std::string, size_t>& l_map,
                  bool compare,
                  const std::string& c_time);

  void OpenSuite(const std::string& name);

  void CloseSuite();

  void AddCase(const std::map<size_t, BenchmarkCase*>& children,
               const std::map<size_t, std::list<utils::ObjectStore>>& results);

  void Finalize();

 private:
  std::list<OutputHandler*> handlers;
};

}

#include "output_manager_impl.hpp"

#endif // MANAK_OUTPUT_MANAGER_HPP_INCLUDED
