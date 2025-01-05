#include <range/v3/algorithm/minmax.hpp>
std::pair<long, long> get_min_max( const std::vector< long >& seq ) {
  const auto [ min, max ]{ ranges::minmax( seq )};
  return std::make_pair( min, max );
}
